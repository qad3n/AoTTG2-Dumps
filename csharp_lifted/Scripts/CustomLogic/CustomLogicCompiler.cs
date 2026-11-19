// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCompiler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCompiler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200063C")]
public class CustomLogicCompiler
{
	[Token(Token = "0x200063D")]
	private class FileRange
	{
		[Token(Token = "0x17000A72")]
		public string Name
		{
			[Token(Token = "0x6003C11")]
			[Address(RVA = "0x5A73C50", Offset = "0x5A72C50", VA = "0x5A73C50")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_Name): clean
				return this._Name_k__BackingField;
			}
			[Token(Token = "0x6003C12")]
			[Address(RVA = "0x5A73C60", Offset = "0x5A72C60", VA = "0x5A73C60")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_Name): clean
				this._Name_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A73")]
		public CustomLogicSourceType Type
		{
			[Token(Token = "0x6003C13")]
			[Address(RVA = "0x5A73C70", Offset = "0x5A72C70", VA = "0x5A73C70")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_Type): clean
				return this._Type_k__BackingField;
			}
			[Token(Token = "0x6003C14")]
			[Address(RVA = "0x5A73C80", Offset = "0x5A72C80", VA = "0x5A73C80")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_Type): clean
				this._Type_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A74")]
		public int StartLine
		{
			[Token(Token = "0x6003C15")]
			[Address(RVA = "0x5A73C90", Offset = "0x5A72C90", VA = "0x5A73C90")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_StartLine): clean
				return this._StartLine_k__BackingField;
			}
			[Token(Token = "0x6003C16")]
			[Address(RVA = "0x5A73CA0", Offset = "0x5A72CA0", VA = "0x5A73CA0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_StartLine): clean
				this._StartLine_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A75")]
		public int EndLine
		{
			[Token(Token = "0x6003C17")]
			[Address(RVA = "0x5A73CB0", Offset = "0x5A72CB0", VA = "0x5A73CB0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_EndLine): clean
				return this._EndLine_k__BackingField;
			}
			[Token(Token = "0x6003C18")]
			[Address(RVA = "0x5A73CC0", Offset = "0x5A72CC0", VA = "0x5A73CC0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_EndLine): clean
				this._EndLine_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A76")]
		public int LineCount
		{
			[Token(Token = "0x6003C19")]
			[Address(RVA = "0x5A73CD0", Offset = "0x5A72CD0", VA = "0x5A73CD0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_LineCount): clean
				return this._LineCount_k__BackingField;
			}
			[Token(Token = "0x6003C1A")]
			[Address(RVA = "0x5A73CE0", Offset = "0x5A72CE0", VA = "0x5A73CE0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_LineCount): clean
				this._LineCount_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000A77")]
		public int MapLogicOffset
		{
			[Token(Token = "0x6003C1B")]
			[Address(RVA = "0x5A73CF0", Offset = "0x5A72CF0", VA = "0x5A73CF0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$get_MapLogicOffset): clean
				return this._MapLogicOffset_k__BackingField;
			}
			[Token(Token = "0x6003C1C")]
			[Address(RVA = "0x5A73D00", Offset = "0x5A72D00", VA = "0x5A73D00")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$set_MapLogicOffset): clean
				this._MapLogicOffset_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6003C1D")]
		[Address(RVA = "0x5A73590", Offset = "0x5A72590", VA = "0x5A73590")]
		public FileRange()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.FileRange$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x200063F")]
	[CompilerGenerated]
	private sealed class _003CGetFileInfo_003Ed__13 : IEnumerable<(string, CustomLogicSourceType, int, int)>, IEnumerable, IEnumerator<(string, CustomLogicSourceType, int, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B61")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B62")]
		[FieldOffset(Offset = "0x18")]
		private (string Name, CustomLogicSourceType Type, int StartLine, int EndLine) _003C_003E2__current;

		[Token(Token = "0x4001B63")]
		[FieldOffset(Offset = "0x30")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001B64")]
		[FieldOffset(Offset = "0x38")]
		public CustomLogicCompiler _003C_003E4__this;

		[Token(Token = "0x4001B65")]
		[FieldOffset(Offset = "0x40")]
		private List<FileRange>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000A78")]
		private (string, CustomLogicSourceType, int, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002ECurrent
		{
			[Token(Token = "0x6003C26")]
			[Address(RVA = "0x5A74090", Offset = "0x5A73090", VA = "0x5A74090", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.Generic.IEnumerator<(System.StringName,CustomLogic.CustomLogicSourceTypeType,System.Int32StartLine,System.Int32EndLine)>.get_Current): 2 lines keep C-only constructs
				uint uVar1;
				int iVar2;
				int iVar3;

				uVar1 = *(uint)&this.__2__current.field_0x14;
				__return_storage_ptr__.Item4 = this.__2__current.Item4;
				*(uint)&__return_storage_ptr__.field_0x14 = uVar1;
				iVar2 = this.__2__current.Item2;
				iVar3 = this.__2__current.Item3;
				__return_storage_ptr__.Item1 = this.__2__current.Item1;
				__return_storage_ptr__.Item2 = iVar2;
				__return_storage_ptr__.Item3 = iVar3;
				return __return_storage_ptr__;
			}
		}

		[Token(Token = "0x17000A79")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003C28")]
			[Address(RVA = "0x5A740F0", Offset = "0x5A730F0", VA = "0x5A740F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerator.get_Current): 3 lines keep C-only constructs
				object pIVar1;
				ulong uStack_20;
				ulong local_18;

				local_18 = *(ulong)&this.__2__current.Item4;
				uStack_20._0_4_ = this.__2__current.Item2;
				uStack_20._4_4_ = this.__2__current.Item3;
				return pIVar1;
			}
		}

		[Token(Token = "0x6003C22")]
		[Address(RVA = "0x5A738F0", Offset = "0x5A728F0", VA = "0x5A738F0")]
		[DebuggerHidden]
		public _003CGetFileInfo_003Ed__13(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6003C23")]
		[Address(RVA = "0x5A73DC0", Offset = "0x5A72DC0", VA = "0x5A73DC0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 1) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x6003C24")]
		[Address(RVA = "0x5A73E10", Offset = "0x5A72E10", VA = "0x5A73E10", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$MoveNext): 15 lines keep C-only constructs
			int iVar1;
			CustomLogicCompiler pCVar2;
			List<CustomLogicCompiler.FileRange> __this_00;
			CustomLogicCompiler.FileRange pCVar3;
			CustomLogicCompiler.d__13<GetFileInfo> pCVar4;
			bool bVar5;
			CustomLogicCompiler.d__13<GetFileInfo> local_50;
			byte[] local_48 = new byte[16];
			ulong local_38;
			CustomLogicCompiler.d__13<GetFileInfo>* local_28;
			System_Collections_Generic_List_Enumerator_T__o local_20;

			local_50 = this;
			local_28 = &local_50;
			iVar1 = this.__1__state;
			if (iVar1 != 1) {
				if (iVar1 != 0) {
					return false;
				}
				pCVar2 = this.__4__this;
				this.__1__state = -1;
				if (pCVar2 == null) {
					throw new NullReferenceException();
				}
				__this_00 = pCVar2._fileRanges;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_20 = __this_00.GetEnumerator();
				local_38 = (CustomLogicCompiler.FileRange)local_20._current;
				local_48._0_8_ = local_20._list;
				local_48._8_4_ = local_20._index;
				local_48._12_4_ = local_20._version;
				local_50.__7__wrap1._current =(CustomLogicCompiler.FileRange)local_20._current;
				local_50.__7__wrap1._list = local_20._list;
				local_50.__7__wrap1._index = local_20._index;
				local_50.__7__wrap1._version = local_20._version;
				this = local_50;
			}
			this.__1__state = -3;
			bVar5 = (this.__7__wrap1).MoveNext();
			pCVar4 = local_50;
			if (!bVar5) {
				if (Il2CppMethodInitialized_07547365 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose) ;
					Il2CppMethodInitialized_07547365 = true;
				}
				pCVar4.__1__state = -1;
				(pCVar4.__7__wrap1).Dispose();
				local_50.__7__wrap1._list = null;
				local_50.__7__wrap1._index = 0;
				local_50.__7__wrap1._version = 0;
				local_50.__7__wrap1._current = null;
				return false;
			}
			pCVar3 = local_50.__7__wrap1._current;
			if (pCVar3 == null) {
				throw new NullReferenceException();
			}
			local_48._0_8_ = null;
			local_48._8_4_ = 0;
			local_48._12_4_ = 0;
			local_38._0_4_ = 0;
			local_38._4_4_ = 0;
			local_48 = new ValueTuple<object, Int32Enum, int, int>((object)pCVar3._Name_k__BackingField, pCVar3._Type_k__BackingField, pCVar3._StartLine_k__BackingField, pCVar3._EndLine_k__BackingField);
			local_50.__2__current.Item4 = (int32_t)local_38;
			*(uint)&local_50.__2__current.field_0x14 = local_38._4_4_;
			local_50.__2__current.Item1 = (String)local_48._0_8_;
			local_50.__2__current.Item2 = local_48._8_4_;
			local_50.__2__current.Item3 = local_48._12_4_;
			local_50.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6003C25")]
		[Address(RVA = "0x5A74050", Offset = "0x5A73050", VA = "0x5A74050")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x6003C27")]
		[Address(RVA = "0x5A740B0", Offset = "0x5A730B0", VA = "0x5A740B0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x6003C29")]
		[Address(RVA = "0x5A74140", Offset = "0x5A73140", VA = "0x5A74140", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, CustomLogicSourceType, int, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.Generic.IEnumerable<(System.StringName,CustomLogic.CustomLogicSourceTypeType,System.Int32StartLine,System.Int32EndLine)>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			CustomLogicCompiler.d__13<GetFileInfo> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new CustomLogicCompiler.d__13<GetFileInfo>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6003C2A")]
		[Address(RVA = "0x5A741E0", Offset = "0x5A731E0", VA = "0x5A741E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<(System.StringName,CustomLogic.CustomLogicSourceTypeType,System.Int32StartLine,System.Int32EndLine)>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x4001B55")]
	[FieldOffset(Offset = "0x10")]
	private List<CustomLogicSourceFile> _sourceFiles;

	[Token(Token = "0x4001B56")]
	[FieldOffset(Offset = "0x18")]
	private List<FileRange> _fileRanges;

	[Token(Token = "0x4001B57")]
	[FieldOffset(Offset = "0x20")]
	private string _combinedSource;

	[Token(Token = "0x17000A70")]
	public int FileCount
	{
		[Token(Token = "0x6003C0C")]
		[Address(RVA = "0x5A73920", Offset = "0x5A72920", VA = "0x5A73920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$get_FileCount): clean
			List<CustomLogicCompiler.FileRange> pSVar1;

			pSVar1 = this._fileRanges;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x17000A71")]
	public int TotalLines
	{
		[Token(Token = "0x6003C0D")]
		[Address(RVA = "0x5A73960", Offset = "0x5A72960", VA = "0x5A73960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$get_TotalLines): 1 lines keep C-only constructs
			int iVar1;
			List<CustomLogicCompiler.FileRange> __this_00;
			object pIVar2;

			__this_00 = this._fileRanges;
			if (__this_00 != null) {
				iVar1 = __this_00._size;
				if (iVar1 < 1) {
					return 0;
				}
				pIVar2 = __this_00.get_Item(iVar1 + -1);
				if (pIVar2 != null) {
					return *(int)&pIVar2[2].klass + 1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6003C02")]
	[Address(RVA = "0x5A72F40", Offset = "0x5A71F40", VA = "0x5A72F40")]
	public void AddSourceFile(CustomLogicSourceFile file)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$AddSourceFile): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicSourceFile> __this_00;
		CustomLogicSourceFile[] pCVar3;

		__this_00 = this._sourceFiles;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pCVar3 = __this_00._items;
			if (pCVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pCVar3.Length) {
					__this_00._size = uVar2 + 1;
					pCVar3[(int)uVar2] = file;
					return;
				}
				__this_00.AddWithResize((object)file);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C03")]
	[Address(RVA = "0x5A72FE0", Offset = "0x5A71FE0", VA = "0x5A72FE0")]
	public void AddSourceFiles(IEnumerable<CustomLogicSourceFile> files)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$AddSourceFiles): clean
		List<CustomLogicSourceFile> __this_00;

		__this_00 = this._sourceFiles;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.AddRange((IEnumerable<T>)files);
		return;
	}

	[Token(Token = "0x6003C04")]
	[Address(RVA = "0x5A73030", Offset = "0x5A72030", VA = "0x5A73030")]
	public string Compile()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$Compile): 23 lines keep C-only constructs
		int piVar1;
		String* targetAddress;
		int iVar2;
		int iVar3;
		int iVar4;
		uint uVar5;
		List<CustomLogicSourceFile> pSVar6;
		object pIVar7;
		List<CustomLogicCompiler.FileRange> pSVar8;
		CustomLogicCompiler.FileRange[] pCVar9;
		bool bVar11;
		CustomLogic_CustomLogicCompiler___c_StaticFields pCVar12;
		Func<CustomLogicSourceFile, int> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source;
		System_Collections_Generic_List_TSource__o __this_01;
		List<string> __this_02;
		String[] pSVar13;
		CustomLogicCompiler.FileRange __this_03;
		String pSVar14;
		int iVar15;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar6 = this._sourceFiles;
		if ((typeof(CustomLogicCompiler.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar12 = typeof(CustomLogicCompiler.c).static_fields;
			__this_00 = pCVar12.__9__6_0;
		}
		else {
			pCVar12 = typeof(CustomLogicCompiler.c).static_fields;
			__this_00 = pCVar12.__9__6_0;
		}
		if (__this_00 == null) {
			if (((typeof(CustomLogicCompiler.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar12 = typeof(CustomLogicCompiler.c).static_fields;
			}
			pIVar7 = (object)pCVar12.__9;
			__this_00 = new Func<CustomLogicSourceFile, int>(pIVar7, (intptr_t)MethodInfo_CustomLogic_CustomLogicCompiler_c_Compile_b__6_0);
			pCVar12 = typeof(CustomLogicCompiler.c).static_fields;
			pCVar12.__9__6_0 = __this_00;
		}
		source = Enumerable.OrderBy<CustomLogicSourceFile, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6, (System_Func_TSource__TKey__o)__this_00);
		__this_01 = Enumerable.ToList<CustomLogicSourceFile>((System_Collections_Generic_IEnumerable_TSource__o)source) ;
		pSVar8 = this._fileRanges;
		if (pSVar8 != null) {
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			iVar3 = pSVar8._size;
			pSVar8._size = 0;
			if (0 < iVar3) {
				Array.Clear((Array)pSVar8._items, 0, iVar3);
			}
			__this_02 = new List<string>();
			if (__this_01 != null) {
				local_48.GetEnumerator((List<object>)__this_01);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				iVar15 = 0;
				while (true) {
					bVar11 = local_68.MoveNext();
					pIVar7 = local_58;
					if (!(bVar11)) break;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					if ((local_58[1].monitor == null) ||(pSVar13 = local_58[1].monitor.Split(10, 0), pSVar13 == null)) {
						throw new NullReferenceException();
					}
					iVar4 = (int)pSVar13.Length;
					__this_03 = new CustomLogicCompiler.FileRange();
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					__this_03._Name_k__BackingField = (String)pIVar7[1].klass;
					__this_03._Type_k__BackingField = *(int)&pIVar7[2].klass;
					__this_03._StartLine_k__BackingField = iVar15;
					iVar2 = iVar15 + -1 + iVar4;
					__this_03._EndLine_k__BackingField = iVar2;
					__this_03._LineCount_k__BackingField = iVar4;
					__this_03._MapLogicOffset_k__BackingField = *(int)((long)&pIVar7[2].monitor + 4);
					pSVar8 = this._fileRanges;
					if (pSVar8 == null) {
	label_05b734cc: ;
						throw new NullReferenceException();
					}
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					pCVar9 = pSVar8._items;
					if (pCVar9 == null) goto label_05b734cc;
					uVar5 = pSVar8._size;
					if (uVar5 < (uint)pCVar9.Length) {
						pSVar8._size = uVar5 + 1;
						pCVar9[(int)uVar5] = __this_03;
					}
					else {
						pSVar8.AddWithResize((object)__this_03);
					}
					*(int)((long)&pIVar7[2].klass + 4) = iVar15;
					*(int)&pIVar7[2].monitor = iVar2;
					if (__this_02 == null) {
	label_05b734c7: ;
						throw new NullReferenceException();
					}
					pSVar14 = pIVar7[1].monitor;
					piVar1 = &__this_02._version;
					*piVar1 = *piVar1 + 1;
					pSVar13 = __this_02._items;
					if (pSVar13 == null) goto label_05b734c7;
					iVar15 = iVar15 + iVar4;
					uVar5 = __this_02._size;
					if (uVar5 < (uint)pSVar13.Length) {
						__this_02._size = uVar5 + 1;
						pSVar13[(int)uVar5] = pSVar14;
					}
					else {
						__this_02.AddWithResize((object)pSVar14);
					}
				}
				local_68.Dispose();
				pSVar14 = String.Join("\n", (IEnumerable<string>)__this_02);
				targetAddress = &this._combinedSource;
				this._combinedSource = pSVar14;
				pSVar6 = this._sourceFiles;
				if (pSVar6 != null) {
					piVar1 = &pSVar6._version;
					*piVar1 = *piVar1 + 1;
					iVar3 = pSVar6._size;
					pSVar6._size = 0;
					if (0 < iVar3) {
						Array.Clear((Array)pSVar6._items, 0, iVar3);
					}
					return *targetAddress;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C05")]
	[Address(RVA = "0x5A735A0", Offset = "0x5A725A0", VA = "0x5A735A0")]
	public string GetCombinedSource()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetCombinedSource): clean
		return this._combinedSource;
	}

	[Token(Token = "0x6003C06")]
	[Address(RVA = "0x5A735B0", Offset = "0x5A725B0", VA = "0x5A735B0")]
	public string FormatLineNumber(int globalLine)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$FormatLineNumber): clean
		int iVar1;
		CustomLogicCompiler.FileRange pCVar2;
		object pIVar3;
		String pSVar4;
		object arg2;
		int iVar5;
		int local_34;
		int local_30;
		int local_2c;

		local_2c = globalLine;
		pCVar2 = this.FindFileRange(globalLine);
		if (pCVar2 == null) {
			pSVar4 = local_2c.ToString();
		}
		else {
			iVar5 = (globalLine - pCVar2._StartLine_k__BackingField) + 1;
			iVar1 = pCVar2._Type_k__BackingField;
			local_34 = globalLine;
			if (iVar1 == 3) {
				pIVar3 = (object)local_34;
				pSVar4 = pCVar2._Name_k__BackingField;
				local_30 = iVar5 + pCVar2._MapLogicOffset_k__BackingField;
				arg2 = (object)local_30;
			}
			else {
				if (iVar1 == 0) {
					pIVar3 = (object)local_34;
					pSVar4 = String.Format("{0} (Internal C# Bindings)", pIVar3);
					return pSVar4;
				}
				pIVar3 = (object)local_34;
				pSVar4 = pCVar2._Name_k__BackingField;
				local_30 = iVar5;
				arg2 = (object)local_30;
			}
			pSVar4 = String.Format("{0} ({1}:{2})", pIVar3, (object)pSVar4, arg2);
		}
		return pSVar4;
	}

	[Token(Token = "0x6003C07")]
	[Address(RVA = "0x5A73700", Offset = "0x5A72700", VA = "0x5A73700")]
	private FileRange FindFileRange(int globalLine)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$FindFileRange): clean
		List<CustomLogicCompiler.FileRange> pSVar1;
		CustomLogicCompiler.FileRange pCVar2;
		int index;
		int iVar3;
		int iVar4;

		pSVar1 = this._fileRanges;
		if (pSVar1 == null) {
	label_05b737c0: ;
			throw new NullReferenceException();
		}
		iVar4 = pSVar1._size + -1;
		if (-1 < iVar4) {
			iVar3 = 0;
			do {
				while(true) {
					pSVar1 = this._fileRanges;
					if (pSVar1 == null) goto label_05b737c0;
					index = (iVar4 - iVar3) / 2 + iVar3;
					pCVar2 = (CustomLogicCompiler.FileRange)pSVar1.get_Item(index) ;
					if (pCVar2 == null) goto label_05b737c0;
					if (globalLine < pCVar2._StartLine_k__BackingField) break;
					if (globalLine <= pCVar2._EndLine_k__BackingField) {
						return pCVar2;
					}
					iVar3 = index + 1;
					if (iVar4 < iVar3) {
						return null;
					}
				}
				iVar4 = index + -1;
			} while (iVar3 <= iVar4);
		}
		return null;
	}

	[Token(Token = "0x6003C08")]
	[Address(RVA = "0x5A737D0", Offset = "0x5A727D0", VA = "0x5A737D0")]
	public string GetFileNameForLine(int globalLine)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetFileNameForLine): clean
		CustomLogicCompiler.FileRange pCVar1;

		pCVar1 = this.FindFileRange(globalLine);
		if (pCVar1 == null) {
			return null;
		}
		return pCVar1._Name_k__BackingField;
	}

	[Token(Token = "0x6003C09")]
	[Address(RVA = "0x5A737F0", Offset = "0x5A727F0", VA = "0x5A737F0")]
	public CustomLogicSourceType? GetFileTypeForLine(int globalLine)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetFileTypeForLine): 2 lines keep C-only constructs
		CustomLogicCompiler.FileRange pCVar1;
		Nullable<CustomLogicSourceType> SVar2;
		Nullable<CustomLogicSourceType> SStack_18;

		pCVar1 = this.FindFileRange(globalLine);
		if (pCVar1 == null) {
			SVar2.hasValue = false;
			SVar2._1_3_ = 0;
			SVar2.value = 0;
			return (Nullable<CustomLogicSourceType>)SVar2;
		}
		SStack_18.hasValue = false;
		SStack_18._1_3_ = 0;
		SStack_18.value = 0;
		SStack_18 = new Nullable<Int32Enum>(pCVar1._Type_k__BackingField);
		return (Nullable<CustomLogicSourceType>)SStack_18;
	}

	[Token(Token = "0x6003C0A")]
	[Address(RVA = "0x5A73860", Offset = "0x5A72860", VA = "0x5A73860")]
	public int GetLocalLineNumber(int globalLine)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetLocalLineNumber): clean
		CustomLogicCompiler.FileRange pCVar1;

		pCVar1 = this.FindFileRange(globalLine);
		if (pCVar1 == null) {
			return -1;
		}
		return (globalLine - pCVar1._StartLine_k__BackingField) + 1;
	}

	[Token(Token = "0x6003C0B")]
	[Address(RVA = "0x5A73880", Offset = "0x5A72880", VA = "0x5A73880")]
	[IteratorStateMachine(typeof(_003CGetFileInfo_003Ed__13))]
	public IEnumerable<(string, CustomLogicSourceType, int, int)> GetFileInfo()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetFileInfo): 1 lines keep C-only constructs
		int iVar1;
		CustomLogicCompiler.d__13<GetFileInfo> __this_00;

		__this_00 = new CustomLogicCompiler.d__13<GetFileInfo>();
		__this_00.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar1;
		__this_00.__4__this = this;
		return (System_Collections_Generic_IEnumerable_ValueTuple_string__CustomLogicSourceType__int__int___o)__this_00;
	}

	[Token(Token = "0x6003C0E")]
	[Address(RVA = "0x5A739D0", Offset = "0x5A729D0", VA = "0x5A739D0")]
	public void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$Clear): 4 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<CustomLogicSourceFile> pSVar3;
		List<CustomLogicCompiler.FileRange> pSVar4;

		pSVar3 = this._sourceFiles;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar3._size;
			pSVar3._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar3._items, 0, iVar2);
			}
			pSVar4 = this._fileRanges;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar4._size;
				pSVar4._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar4._items, 0, iVar2);
				}
				this._combinedSource = null;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C0F")]
	[Address(RVA = "0x5A73A70", Offset = "0x5A72A70", VA = "0x5A73A70")]
	public int GetBaseLogicOffset()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$GetBaseLogicOffset): 3 lines keep C-only constructs
		List<CustomLogicCompiler.FileRange> source;
		int iVar1;
		CustomLogic_CustomLogicCompiler___c_StaticFields pCVar2;
		Func<CustomLogicCompiler.FileRange, bool> __this_00;
		object pIVar3;

		source = this._fileRanges;
		if ((typeof(CustomLogicCompiler.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar2 = typeof(CustomLogicCompiler.c).static_fields;
			__this_00 = pCVar2.__9__19_0;
		}
		else {
			pCVar2 = typeof(CustomLogicCompiler.c).static_fields;
			__this_00 = pCVar2.__9__19_0;
		}
		if (__this_00 == null) {
			if (((typeof(CustomLogicCompiler.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = typeof(CustomLogicCompiler.c).static_fields;
			}
			pIVar3 = (object)pCVar2.__9;
			__this_00 = new Func<CustomLogicCompiler.FileRange, bool>(pIVar3, (intptr_t)MethodInfo_CustomLogic_CustomLogicCompiler_c_GetBaseLogicOffset_b__19_0);
			pCVar2 = typeof(CustomLogicCompiler.c).static_fields;
			pCVar2.__9__19_0 = __this_00;
		}
		pIVar3 = Enumerable.FirstOrDefault<CustomLogicCompiler.FileRange>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if (pIVar3 == null) {
		}
		else {
			iVar1 = *(int)((long)&pIVar3[1].monitor + 4);
		}
		return iVar1;
	}

	[Token(Token = "0x6003C10")]
	[Address(RVA = "0x5A73B90", Offset = "0x5A72B90", VA = "0x5A73B90")]
	public CustomLogicCompiler()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCompiler.c (CustomLogic.CustomLogicCompiler$$.ctor): 1 lines keep C-only constructs
		List<CustomLogicSourceFile> __this_00;
		List<CustomLogicCompiler.FileRange> __this_01;

		__this_00 = new List<CustomLogicSourceFile>();
		this._sourceFiles = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(List<CustomLogicCompiler.FileRange>));
		__this_01 = new List<object>();
		this._fileRanges = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCompiler.c.

	// CustomLogic.CustomLogicCompiler.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicCompiler.c();
		CustomLogicCompiler.c.__9 =(CustomLogicCompiler.c)__this;
		return;
	}

	// CustomLogic.CustomLogicCompiler.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicCompiler.<>c$$<Compile>b__6_0: clean
	private int c__Compile_b__6_0(CustomLogicSourceFile f)
	{
		if (f == null) {
			throw new NullReferenceException();
		}
		return f._Type_k__BackingField;
	}

	// CustomLogic.CustomLogicCompiler.<>c$$<GetBaseLogicOffset>b__19_0: clean
	private bool c__GetBaseLogicOffset_b__19_0(CustomLogicCompiler.FileRange r)
	{
		if (r == null) {
			throw new NullReferenceException();
		}
		return r._Type_k__BackingField == 1;
	}
}
