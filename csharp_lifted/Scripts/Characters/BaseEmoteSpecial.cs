// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseEmoteSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseEmoteSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D4")]
internal class BaseEmoteSpecial : ExtendedUseable
{
	[Token(Token = "0x4002055")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x17000B63")]
	protected virtual bool GroundedOnly
	{
		[Token(Token = "0x600428D")]
		[Address(RVA = "0x5B08D80", Offset = "0x5B07D80", VA = "0x5B08D80", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Characters/BaseEmoteSpecial.c (Characters.BaseEmoteSpecial$$get_GroundedOnly): clean
			return true;
		}
	}

	[Token(Token = "0x600428E")]
	[Address(RVA = "0x5B08D90", Offset = "0x5B07D90", VA = "0x5B08D90")]
	public BaseEmoteSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/BaseEmoteSpecial.c (Characters.BaseEmoteSpecial$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;

		base(owner);
		pCVar2 = typeof(Human);
		if (owner == null) {
			this._human = null;
	label_05c08e1f: ;
			return;
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
			this._human = (Human)owner;
			if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pCVar2)) goto label_05c08e1f;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x600428F")]
	[Address(RVA = "0x5B08E40", Offset = "0x5B07E40", VA = "0x5B08E40", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/BaseEmoteSpecial.c (Characters.BaseEmoteSpecial$$CanUse): clean
		Human __this_00;
		bool bVar1;

		bVar1 = this.CanUse();
		if (!bVar1) {
			return false;
		}
		bVar1 = this.get_GroundedOnly();
		__this_00 = this._human;
		if (bVar1) {
			if (__this_00 != null) {
				if (__this_00.Grounded == false) {
					return false;
				}
	label_05c08e81: ;
				bVar1 = __this_00.CanEmote();
				return bVar1;
			}
		}
		else if (__this_00 != null) goto label_05c08e81;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004290")]
	[Address(RVA = "0x5B08E90", Offset = "0x5B07E90", VA = "0x5B08E90")]
	protected bool InSpecial()
	{
		// Lifted from source/cpp/Characters/BaseEmoteSpecial.c (Characters.BaseEmoteSpecial$$InSpecial): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1._state == 8;
	}
}
