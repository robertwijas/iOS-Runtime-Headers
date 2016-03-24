/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStoragePasteRules : NSObject {
    unsigned int _actionFlags;
    TSWPStorage *_destStorage;
    unsigned int _flags;
    unsigned int _lastFlag;
    BOOL _mapDestTrailCS;
    struct { 
        TSWPParagraphStyle *parStyle; 
        TSPObject *section; 
        TSWPColumnStyle *columnStyle; 
        TSWPListStyle *listStyle; 
        struct TSWPParagraphData { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parData; 
        struct TSWPParagraphData { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parStartData; 
        struct TSWPParagraphData { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parBidiData; 
    } _paragraphs;
    unsigned int _sourceColumnStyleCount;
    unsigned int _sourceSectionCount;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _srcLeadRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _srcTrailRange;
}

- (id).cxx_construct;
- (void)addActionFlag:(int)arg1;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned int)arg2 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_1_1; struct TSWPStorageActionGroup {} *x_2_1_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_2_1; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; struct TSWPStorageActionGroup { int x_6_1_1; unsigned int x_6_1_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_2_1; struct TSWPStorageAction {} *x_3_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_3_2_3; } x_6_1_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_2_1; struct TSWPStorageAction {} *x_4_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_4_2_3; } x_6_1_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_2_1; struct TSWPStorageAction {} *x_5_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_5_2_3; } x_6_1_5; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_6_2_1; struct TSWPStorageAction {} *x_6_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_6_2_3; } x_6_1_6; bool x_6_1_7; struct TSWPMarkers { struct vector<std::__1::pair<unsigned int, unsigned short>, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_1_3_1; struct pair<unsigned int, unsigned short> {} *x_1_3_2; struct __compressed_pair<std::__1::pair<unsigned int, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_3_4_1; } x_1_3_3; } x_8_2_1; bool x_8_2_2; bool x_8_2_3; bool x_8_2_4; bool x_8_2_5; } x_6_1_8; } x6; unsigned int x7; unsigned int x8; struct vector<TSWPStorageChangeRange, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<TSWPStorageChangeRange *, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; unsigned int x10; unsigned int x11; bool x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; }*)arg3;
- (void)dealloc;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_1_1; struct TSWPStorageActionGroup {} *x_2_1_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_2_1; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; struct TSWPStorageActionGroup { int x_6_1_1; unsigned int x_6_1_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_2_1; struct TSWPStorageAction {} *x_3_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_3_2_3; } x_6_1_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_2_1; struct TSWPStorageAction {} *x_4_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_4_2_3; } x_6_1_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_2_1; struct TSWPStorageAction {} *x_5_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_5_2_3; } x_6_1_5; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_6_2_1; struct TSWPStorageAction {} *x_6_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_6_2_3; } x_6_1_6; bool x_6_1_7; struct TSWPMarkers { struct vector<std::__1::pair<unsigned int, unsigned short>, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_1_3_1; struct pair<unsigned int, unsigned short> {} *x_1_3_2; struct __compressed_pair<std::__1::pair<unsigned int, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_3_4_1; } x_1_3_3; } x_8_2_1; bool x_8_2_2; bool x_8_2_3; bool x_8_2_4; bool x_8_2_5; } x_6_1_8; } x6; unsigned int x7; unsigned int x8; struct vector<TSWPStorageChangeRange, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<TSWPStorageChangeRange *, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; unsigned int x10; unsigned int x11; bool x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; out void*x20; int x21; void*x22; double x23; void*x24; char *x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; short x35; void*x36; void*x37; void*x38; const void*x39; void*x40; void*x41; BOOL x42; void*x43; void*x44; void*x45; void*x46; void*x47; void x48; void*x49; void*x50; void*x51; BOOL x52; void*x53; void*x54; void*x55; out void*x56; const void*x57; void*x58; void*x59; void*x60; void*x61; unsigned short x62; void*x63; void*x64; void*x65; void*x66; void*x67; unsigned short x68; void*x69; void*x70; void*x71; out void*x72; const void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; const void*x82; void*x83; void*x84; in void*x85; short x86; void*x87; void*x88; void*x89; BOOL x90; void*x91; void*x92; void*x93; int x94; void*x95; out void*x96; in void*x97; bycopy void*x98; unsigned int x99/* : ? */; void*x100; void*x101; void*x102; void*x103; void*x104; BOOL x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; short x113; void*x114; void*x115; void*x116; double x117; void*x118; SEL x119; void*x120; SEL x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; SEL x129; void*x130; SEL x131; void*x132; void*x133; void*x134; long x135; void*x136; long x137; void*x138; out void*x139; BOOL x140; void*x141; void*x142; void*x143; void*x144; void*x145; out void*x146; const void*x147; void*x148; void*x149; void*x150; void*x151; unsigned short x152; void*x153; void*x154; void*x155; void*x156; void*x157; unsigned short x158; void*x159; void*x160; void*x161; out void*x162; const void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; const void*x172; void*x173; void*x174; in void*x175; short x176; void*x177; void*x178; void*x179; BOOL x180; void*x181; void*x182; void*x183; int x184; void*x185; out void*x186; in void*x187; bycopy void*x188; unsigned int x189/* : ? */; void*x190; void*x191; void*x192; void*x193; void*x194; BOOL x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; struct x207; void*x208; void*x209; void*x210; short x211; void*x212; void*x213; void*x214; const void*x215; void*x216; void*x217; BOOL x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; unsigned short x226; void*x227; void*x228; void*x229; void*x230; void*x231; unsigned short x232; void*x233; void*x234; void*x235; out void*x236; const void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; const void*x246; void*x247; void*x248; in void*x249; short x250; void*x251; void*x252; void*x253; BOOL x254; void*x255; void*x256; void*x257; int x258; void*x259; out void*x260; in void*x261; bycopy void*x262; unsigned int x263/* : ? */; void*x264; void*x265; void*x266; void*x267; void*x268; BOOL x269; void*x270; void*x271; void*x272; void*x273; void*x274; struct x275; void*x276; }*)arg1 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_1_1; struct TSWPStorageActionGroup {} *x_2_1_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_2_1; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; struct TSWPStorageActionGroup { int x_6_1_1; unsigned int x_6_1_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_2_1; struct TSWPStorageAction {} *x_3_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_3_2_3; } x_6_1_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_2_1; struct TSWPStorageAction {} *x_4_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_4_2_3; } x_6_1_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_2_1; struct TSWPStorageAction {} *x_5_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_5_2_3; } x_6_1_5; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_6_2_1; struct TSWPStorageAction {} *x_6_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_6_2_3; } x_6_1_6; bool x_6_1_7; struct TSWPMarkers { struct vector<std::__1::pair<unsigned int, unsigned short>, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_1_3_1; struct pair<unsigned int, unsigned short> {} *x_1_3_2; struct __compressed_pair<std::__1::pair<unsigned int, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_3_4_1; } x_1_3_3; } x_8_2_1; bool x_8_2_2; bool x_8_2_3; bool x_8_2_4; bool x_8_2_5; } x_6_1_8; } x6; unsigned int x7; unsigned int x8; struct vector<TSWPStorageChangeRange, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<TSWPStorageChangeRange *, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; unsigned int x10; unsigned int x11; bool x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; id x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; bool x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; id x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; int x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void* x126[ /* ? */ ]; void*x127; void*x128; void*x129; void*x130; void*x131; }*)arg3;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 useParagraphProperties:(BOOL)arg3 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSWPStorageActionGroup, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_2_1_1; struct TSWPStorageActionGroup {} *x_2_1_2; struct __compressed_pair<TSWPStorageActionGroup *, std::__1::allocator<TSWPStorageActionGroup> > { struct TSWPStorageActionGroup {} *x_3_2_1; } x_2_1_3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; struct TSWPStorageActionGroup { int x_6_1_1; unsigned int x_6_1_2; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_2_1; struct TSWPStorageAction {} *x_3_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_3_2_3; } x_6_1_3; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_4_2_1; struct TSWPStorageAction {} *x_4_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_4_2_3; } x_6_1_4; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_5_2_1; struct TSWPStorageAction {} *x_5_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_5_2_3; } x_6_1_5; struct vector<TSWPStorageAction, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_6_2_1; struct TSWPStorageAction {} *x_6_2_2; struct __compressed_pair<TSWPStorageAction *, std::__1::allocator<TSWPStorageAction> > { struct TSWPStorageAction {} *x_3_3_1; } x_6_2_3; } x_6_1_6; bool x_6_1_7; struct TSWPMarkers { struct vector<std::__1::pair<unsigned int, unsigned short>, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_1_3_1; struct pair<unsigned int, unsigned short> {} *x_1_3_2; struct __compressed_pair<std::__1::pair<unsigned int, unsigned short> *, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > > { struct pair<unsigned int, unsigned short> {} *x_3_4_1; } x_1_3_3; } x_8_2_1; bool x_8_2_2; bool x_8_2_3; bool x_8_2_4; bool x_8_2_5; } x_6_1_8; } x6; unsigned int x7; unsigned int x8; struct vector<TSWPStorageChangeRange, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_9_1_1; struct { /* ? */ } *x_9_1_2; struct __compressed_pair<TSWPStorageChangeRange *, std::__1::allocator<TSWPStorageChangeRange> > { struct { /* ? */ } *x_3_2_1; } x_9_1_3; } x9; unsigned int x10; unsigned int x11; bool x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; short x26; void*x27; void*x28; void*x29; const void*x30; void*x31; void*x32; BOOL x33; void*x34; short x35; void*x36; void*x37; void*x38; const void*x39; void*x40; void*x41; BOOL x42; void*x43; void*x44; void*x45; void*x46; void*x47; void x48; void*x49; void*x50; void*x51; BOOL x52; void*x53; void*x54; void*x55; out void*x56; const void*x57; void*x58; void*x59; void*x60; void*x61; unsigned short x62; void*x63; void*x64; void*x65; void*x66; void*x67; unsigned short x68; void*x69; void*x70; void*x71; out void*x72; const void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; BOOL x81; void*x82; void*x83; void*x84; int x85; void*x86; out void*x87; in void*x88; void*x89; void*x90; void*x91; void*x92; short x93; void*x94; void*x95; void*x96; double x97; void*x98; SEL x99; void*x100; SEL x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; SEL x109; void*x110; SEL x111; void*x112; void*x113; void*x114; long x115; void*x116; long x117; void*x118; out void*x119; BOOL x120; void*x121; void*x122; void*x123; void*x124; void*x125; out void*x126; const void*x127; void*x128; void*x129; void*x130; void*x131; unsigned short x132; void*x133; void*x134; void*x135; void*x136; void*x137; unsigned short x138; void*x139; void*x140; void*x141; out void*x142; const void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; BOOL x151; void*x152; void*x153; void*x154; int x155; void*x156; out void*x157; in void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; struct x167; void*x168; void*x169; void*x170; short x171; void*x172; void*x173; void*x174; const void*x175; void*x176; void*x177; BOOL x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; unsigned short x186; void*x187; void*x188; void*x189; void*x190; void*x191; unsigned short x192; void*x193; void*x194; void*x195; out void*x196; const void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; BOOL x205; void*x206; void*x207; void*x208; int x209; void*x210; out void*x211; in void*x212; void*x213; void*x214; struct x215; void*x216; }*)arg4;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 srcStylesAmbiguous:(BOOL)arg4;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 srcStylesAmbiguous:(BOOL)arg4;

@end