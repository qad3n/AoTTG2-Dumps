// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanSkinSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace CustomSkins;

[Token(Token = "0x20003D4")]
internal class TitanSkinSelection
{
	[Token(Token = "0x4001397")]
	[FieldOffset(Offset = "0x10")]
	public int Body;

	[Token(Token = "0x4001398")]
	[FieldOffset(Offset = "0x14")]
	public int Head;

	[Token(Token = "0x4001399")]
	[FieldOffset(Offset = "0x18")]
	public int Eye;

	[Token(Token = "0x400139A")]
	[FieldOffset(Offset = "0x20")]
	public string Hair;

	[Token(Token = "0x400139B")]
	[FieldOffset(Offset = "0x28")]
	public int SkinSlot;

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x5867450", Offset = "0x5866450", VA = "0x5867450")]
	public TitanCustomSet CreateSet(BasicTitanSetup setup)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinSelection.c (CustomSkins.TitanSkinSelection$$CreateSet): clean
		IntSetting pSVar1;
		StringSetting __this_00;
		TitanCustomSet pSVar2;

		if (setup != null) {
			pSVar2 = setup.CreateRandomSet(this.Head);
			if ((pSVar2 != null) &&(pSVar1 = pSVar2.Body, pSVar1 != null)) {
				pSVar1.Value = this.Body;
				pSVar1 = pSVar2.Eye;
				if (pSVar1 != null) {
					pSVar1.Value = this.Eye;
					__this_00 = pSVar2.Hair;
					if (__this_00 != null) {
						__this_00.Value = (object)this.Hair;
						return pSVar2;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x5867500", Offset = "0x5866500", VA = "0x5867500")]
	public TitanCustomSet ApplyTo(TitanCustomSet set)
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinSelection.c (CustomSkins.TitanSkinSelection$$ApplyTo): clean
		IntSetting pSVar1;
		StringSetting pSVar2;
		bool bVar3;
		TitanCustomSet __this_00;

		if ((set != null) &&(pSVar1 = set.Body, pSVar1 != null)) {
			if (pSVar1._value == this.Body) {
				pSVar1 = set.Head;
				if (pSVar1 == null) goto label_05967670;
				if (pSVar1._value == this.Head) {
					pSVar1 = set.Eye;
					if (pSVar1 == null) goto label_05967670;
					if (pSVar1._value == this.Eye) {
						pSVar2 = set.Hair;
						if (pSVar2 == null) goto label_05967670;
						bVar3 = (pSVar2._value == this.Hair);
						if (bVar3) {
							return set;
						}
					}
				}
			}
			__this_00 = new TitanCustomSet();
			if (__this_00 != null) {
				__this_00.Copy((BaseSetting)set);
				pSVar1 = __this_00.Body;
				if (pSVar1 != null) {
					pSVar1.Value = this.Body;
					pSVar1 = __this_00.Head;
					if (pSVar1 != null) {
						pSVar1.Value = this.Head;
						pSVar1 = __this_00.Eye;
						if (pSVar1 != null) {
							pSVar1.Value = this.Eye;
							pSVar2 = __this_00.Hair;
							if (pSVar2 != null) {
								pSVar2.Value = (object)this.Hair;
								return __this_00;
							}
						}
					}
				}
			}
		}
	label_05967670: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x5867680", Offset = "0x5866680", VA = "0x5867680")]
	public TitanSkinSelection()
	{
		// Lifted from source/cpp/CustomSkins/TitanSkinSelection.c (CustomSkins.TitanSkinSelection$$.ctor): clean
		this.Hair = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.SkinSlot = -1;
		base();
		return;
	}
}
