/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartUIState : NSObject <NSCopying> {
    BOOL  _isValidMultiDataSetIndex;
    unsigned int  _lastColCountInCDE;
    unsigned int  _lastColSelectedInCDE;
    unsigned int  _lastRowCountInCDE;
    unsigned int  _lastRowSelectedInCDE;
    unsigned int  _multiDataSetIndex;
    BOOL  _useFullKeyboard;
}

@property (nonatomic, readonly) BOOL isValidMultiDataSetIndex;
@property (nonatomic, readonly) unsigned int lastColCountInCDE;
@property (nonatomic, readonly) unsigned int lastColSelectedInCDE;
@property (nonatomic, readonly) unsigned int lastRowCountInCDE;
@property (nonatomic, readonly) unsigned int lastRowSelectedInCDE;
@property (nonatomic, readonly) unsigned int multiDataSetIndex;
@property (nonatomic, readonly) BOOL useFullKeyboard;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct ChartUIState { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (id)initWithRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 colRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 useFullKeyboard:(BOOL)arg3;
- (id)initWithRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 colRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 useFullKeyboard:(BOOL)arg3 multiDataSetIndex:(unsigned int)arg4;
- (id)initWithRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 colRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 useFullKeyboard:(BOOL)arg3 multiDataSetIndex:(unsigned int)arg4 validIndex:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidMultiDataSetIndex;
- (unsigned int)lastColCountInCDE;
- (unsigned int)lastColSelectedInCDE;
- (unsigned int)lastRowCountInCDE;
- (unsigned int)lastRowSelectedInCDE;
- (unsigned int)multiDataSetIndex;
- (void)saveToArchive:(struct ChartUIState { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (BOOL)useFullKeyboard;

@end
