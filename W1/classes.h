using namespace std;

class Node {
public:
    int data;
    int flag;
    Node* arbit;
    Node* next;
  
    Node()
    {   arbit = NULL;
    	flag = 0;
        data = 0;
        next = NULL;
    }
  
    Node(int data)
    { 
        this->data = data;
        this->next = NULL;
    }
};

class linkedlist{
   
    public:
    Node *head=NULL;
    
    linkedlist(){head=NULL;}
    
    void insert(int n){
        Node * newnode = new Node(n);
        if(head==NULL)
        head=newnode;
        else
        {
            Node * cur=head;
            while(cur->next != NULL)
            cur=cur->next;
            cur->next=newnode;
        }
    }
    
    void deletenode(int pos){
        Node *del,*cur=head;
        if(head==NULL)
        cout<<"List is empty\n";
        
        else if(pos==1)
        {
            head=head->next;
            delete cur;
        }
        
        else{
        for(int i=1;i<pos-1;i++)
        cur=cur->next;
        if(cur==NULL){
            cout<<"Invalid position";
            return;
        }
        del=cur->next;
        cur->next=cur->next->next;
        delete del;
        }
    }
    
    void deletelist(){
        while(head!=NULL)
        {
            Node *cur=head;
            head=head->next;
            delete cur;;
        }
    }
    
    void print(){
        Node*cur=head;
        while(cur!=NULL)
        {
            printf("%d ",cur->data);
            cur=cur->next;
        }
        cout<<endl;
    }
    
    int length()
    {
        int count=0;
        Node*cur=head;
        while(cur!=NULL)
        {
            count++;
            cur = cur->next;
        }
        return count;
    }
    
    int search(int n)
    {
        Node*cur=head;
        int pos=0;
        while(cur!=NULL)
        {
            pos++;
            if(cur->data==n)
                return pos;
            cur=cur->next;
        }
        return pos;
    }
    
    void printreverse(Node *n){
        if(n->next != NULL)
            printreverse(n->next);
        
            cout<<"\t"<<n->data;
    }
    
};
