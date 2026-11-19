// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasePerk
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BasePerk.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/BasePerk.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006C8")]
internal class BasePerk
{
	[Token(Token = "0x4001FE8")]
	[FieldOffset(Offset = "0x10")]
	public bool Enabled;

	[Token(Token = "0x4001FE9")]
	[FieldOffset(Offset = "0x14")]
	public int CurrPoints;

	[Token(Token = "0x4001FEA")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, int> Requirements;

	[Token(Token = "0x17000B4D")]
	public virtual string Name
	{
		[Token(Token = "0x600420C")]
		[Address(RVA = "0x5AFB0E0", Offset = "0x5AFA0E0", VA = "0x5AFB0E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$get_Name): clean
			return "Default";
		}
	}

	[Token(Token = "0x17000B4E")]
	public virtual int MaxPoints
	{
		[Token(Token = "0x600420D")]
		[Address(RVA = "0x5AFB110", Offset = "0x5AFA110", VA = "0x5AFB110", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$get_MaxPoints): clean
			return 1;
		}
	}

	[Token(Token = "0x600420E")]
	[Address(RVA = "0x5AFB050", Offset = "0x5AFA050", VA = "0x5AFB050")]
	public BasePerk()
	{
		// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$.ctor): clean
		Dictionary<string, int> __this_00;

		__this_00 = new Dictionary<string, int>();
		this.Requirements = __this_00;
		base();
		this.SetupRequirements();
		return;
	}

	[Token(Token = "0x600420F")]
	[Address(RVA = "0x5AFB120", Offset = "0x5AFA120", VA = "0x5AFB120", Slot = "6")]
	protected virtual void SetupRequirements()
	{
		// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$SetupRequirements): clean
		return;
	}

	[Token(Token = "0x6004210")]
	[Address(RVA = "0x5AFB130", Offset = "0x5AFA130", VA = "0x5AFB130", Slot = "7")]
	public virtual bool HasRequirements(Dictionary<string, BasePerk> perks)
	{
		// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$HasRequirements): 9 lines keep C-only constructs
		int iVar1;
		Dictionary<object, int> pSVar2;
		object key;
		bool bVar3;
		int iVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		BasePerk pCVar5;
		int iVar6;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		if (Il2CppMethodInitialized_07547651 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext) ;
			Il2CppMethodInitialized_07547651 = true;
		}
		pSVar2 = (Dictionary<object, int>)this.Requirements;
		if ((pSVar2 == null) ||(__this_00 = pSVar2.Keys, __this_00 == null)) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator(__this_00);
		SStack_68._currentKey = pIStack_38;
		SStack_68._dictionary = (Dictionary<TKey, TValue>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		if (perks == null) {
			auStack_48._8_8_ = &SStack_68;
			bVar3 = SStack_68.MoveNext();
			iVar6 = 6;
			if (bVar3) {
				throw new NullReferenceException();
			}
		}
		else {
			iVar6 = 5;
			auStack_48._8_8_ = &SStack_68;
			do {
				bVar3 = SStack_68.MoveNext();
				key = SStack_68._currentKey;
				if (!bVar3) {
					iVar6 = 6;
					break;
				}
				bVar3 = perks.ContainsKey(SStack_68._currentKey);
				if (!bVar3) break;
				pCVar5 = perks.get_Item(key);
				if (pCVar5 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = (Dictionary<object, int>)this.Requirements;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				iVar1 = pCVar5.CurrPoints;
				iVar4 = pSVar2.get_Item(key);
			} while (iVar4 <= iVar1);
		}
		SStack_68.Dispose();
		return iVar6 != 5;
	}

	[Token(Token = "0x6004211")]
	[Address(RVA = "0x5AFB370", Offset = "0x5AFA370", VA = "0x5AFB370", Slot = "8")]
	public virtual bool Validate(Dictionary<string, BasePerk> perks)
	{
		// Lifted from source/cpp/Characters/BasePerk.c (Characters.BasePerk$$Validate): clean
		bool bVar1;
		int iVar2;
		int iVar3;

		bVar1 = this.HasRequirements(perks);
		iVar3 = this.CurrPoints;
		if (bVar1) {
			if (-1 < iVar3) {
	label_05bfb3a5: ;
				iVar2 = this.get_MaxPoints();
				return iVar3 <= iVar2;
			}
		}
		else {
			bVar1 = iVar3 == 0;
			iVar3 = 0;
			if (bVar1) goto label_05bfb3a5;
		}
		return false;
	}
}
