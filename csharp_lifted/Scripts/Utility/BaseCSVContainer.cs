// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVContainer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200090F")]
public class BaseCSVContainer : BaseCSVObject
{
	[Token(Token = "0x17000EEC")]
	public override char Delimiter
	{
		[Token(Token = "0x60055F4")]
		[Address(RVA = "0x5CE0FA0", Offset = "0x5CDFFA0", VA = "0x5CE0FA0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVContainer.c (Utility.BaseCSVContainer$$get_Delimiter): clean
			return 0x3b;
		}
	}

	[Token(Token = "0x17000EED")]
	protected virtual bool UseNewlines
	{
		[Token(Token = "0x60055F5")]
		[Address(RVA = "0x5CE0FB0", Offset = "0x5CDFFB0", VA = "0x5CE0FB0", Slot = "18")]
		get
		{
			// Lifted from source/cpp/Utility/BaseCSVContainer.c (Utility.BaseCSVContainer$$get_UseNewlines): clean
			return true;
		}
	}

	[Token(Token = "0x60055F6")]
	[Address(RVA = "0x5CE0FC0", Offset = "0x5CDFFC0", VA = "0x5CE0FC0", Slot = "8")]
	public override string Serialize()
	{
		// Lifted from source/cpp/Utility/BaseCSVContainer.c (Utility.BaseCSVContainer$$Serialize): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = this.Serialize();
		bVar1 = this.get_UseNewlines();
		if (bVar1) {
			pSVar2 = this.InsertNewlines(pSVar2);
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x60055F7")]
	[Address(RVA = "0x5CE1240", Offset = "0x5CE0240", VA = "0x5CE1240", Slot = "19")]
	public virtual string InsertNewlines(string str)
	{
		// Lifted from source/cpp/Utility/BaseCSVContainer.c (Utility.BaseCSVContainer$$InsertNewlines): 4 lines keep C-only constructs
		ushort uVar1;
		ulong in_RAX;
		String[] value;
		String pSVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		uVar1 = this.get_Delimiter();
		if (str == null) {
			throw new NullReferenceException();
		}
		value = str.Split(uVar1, 0);
		uVar1 = this.get_Delimiter();
		uStack_18 = CONCAT26(uVar1, (undefined6)uStack_18);
		pSVar2 = Char.ToString((ushort)((long)&uStack_18 + 6));
		pSVar2 = String.Concat(pSVar2, "\n");
		pSVar2 = String.Join(pSVar2, value);
		return pSVar2;
	}

	[Token(Token = "0x60055F8")]
	[Address(RVA = "0x5CE1300", Offset = "0x5CE0300", VA = "0x5CE1300")]
	public BaseCSVContainer()
	{
		// Lifted from source/cpp/Utility/BaseCSVContainer.c (Utility.BaseCSVContainer$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07548283 == false) {
			Il2CppMethodInitialized_07548283 = true;
			uVar1 = (typeof(BaseCSVObject)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BaseCSVObject)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
