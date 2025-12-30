

// #include<iostream>
// using namespace std	;
// #include<memory>

// class UDT{
// 	public:
// 	UDT(){std::cout<<"Hi Constructor"<<std::endl;}
// 	~UDT(){std::cout<<"Hi Destructor"<<std::endl;}	
// };
// int main (){

// 	//--------------------------------------------------------
// 	// //Unique_ptr--Unique pointer--once at a time but wwe can "move" it another pointer
// 	//-------------------------------------------------------
// 	// // UDT sudipta;
// 	// std::unique_ptr<UDT> sudipta=std::unique_ptr<UDT>(new UDT);
// 	// //For array case
// 	// // std::unique_ptr<UDT[]>sudipta_array=std::unique_ptr<UDT[]>(new UDT[4]);
// 	// //Instead of of the upper one line , we can use more sophisticated
// 	// std::unique_ptr<UDT[]>sudipta_arrray=std::make_unique<UDT[]>(4);


// 	//--------------------------------------------------------------
// 	//Share pointer
// 	//-----------------------------------------------------------
// 	std::shared_ptr<UDT>ptr_1=std::make_shared<UDT>();
// 	std::shared_ptr<UDT>ptr_2=ptr_1;
// 	return 0;
// }




