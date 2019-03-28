# Comparison-of-Parallelization-and-Serialization-for-Restaurant-Visitor-Forecasting

NOTE:
  At the  time of compiling, refer the way of compiling given below. 
  Since 'log2' is being used in code '-lm' should be added.
  " cc <filename.c> -lm "
  
ABSTRACT:
   The aim of the study is to analyze an Mexican Restaurant’s customer data using ID3 algorithm. The data in which customers food rating      for the food in the restaurant, rating and service rating for restaurant and cuisine types that customer prefer has been considered for    future classification. ID3 algorithm (Decision Tree) is used to find the customer rating towards food, service and restaurant. 
   The cuisine that customers preferable also determined by this algorithm. Finally after finding the future rating values which type of      food rating, service rating and rating those customers given is identified. The most preferable cuisine from the customers is              determined.
   
INTRODUCTION
  Running a thriving local restaurant for first time could not be impressed well. 
  There are often all sorts of unexpected problems that would affect the business and it could make difficult for recovery. 
  One common idea among the restaurants is to determine how many customers arrive each day and how much revenue they will generate           everyday.
  The future restaurant forecasting could not be easily done because some factors that would affect namely restaurant attendance, weather     and local restaurant competition.
  So the major factor that arises among the several restaurants worldwide is to determine how many customers would come for future days and   will they arrive again or not.
  
DECISION TREE:
  Decision tree is one of the tools used for decision supports which would be useful for taking some correct decisions in future. 
  It looks like a graph model and displays like an algorithm which consists of control statements. 
  It is closely related to human decision making other than some machine learning approaches. 
  Better understanding is possible in this. Often less accurate predictions are found but it’s very fast.
  Decision tree is one of the powerful approaches in knowledge discovery and data mining. 
  Decision trees, originally implemented in decision theory and statistics, are highly effective tools in other areas such as data mining,   text mining, information extraction, machine learning, and pattern recognition.
  
ID3 Algorithm:
  The ID3 algorithm is an algorithm which is used to draw a decision tree from the given dataset. 
  It is widely used in Machine Learning and Natural Language processing domains. 
  The core of the algorithm is to determine the best classification attribute from the given condition attribute sets.
  
 SCATTER AND GATHER:
  In the scatter operation, a single node sends a unique message to every other node. This operation is also known as one-to-all           personalized communication. The dual of  scatter operation is the gather operation. It is also called concatenation, in which a single   node collects a unique message from each node.
  MPI stands for Message passing interface. It is degree of portability across different machines. The functionality of MPI has a wide     range of message passing capabilities and it is widely used. It only specifies what an operation does and avoids how an operation       takes place. In the design of MPI, the data can be moved easily from the user memory to the wire and can be received directly from the   wire to the receiver memory. MPI allows efficient communication and allows overlap of communication and computation.

ID3 in Parallelism:
  Decision trees are suited for machine learning and data mining. It is relatively faster to build and obtain similarity, accuracy when   compared to other classification models. Parallelism of decision trees can be achieved by building decision nodes in parallel or by     distributing the training data. It is complex because the shape of the tree is irregular and the successor node needs a part of the     data in the parent node. It is done in two phases, one is tree construction and the other is simplification phases.
  
 CONCLUSION:
  The entropy and Information Gain has been calculated for Food Rating, Service rating and Overall Rating. 
  It is done for sequence of 33 customers in a parallel way. The ID3 algorithm had been implemented in both parallelization and           serialization. In both the execution of program has been calculated and compared respectively. The execution time of parallelization      found to be lower than serialization. Hence the parallelization consumes less time and it is more efficient.



