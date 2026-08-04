// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SelectorActiveAxis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016C")]
internal class SelectorActiveAxis : ActiveAxis
{
	[Token(Token = "0x400075E")]
	[FieldOffset(Offset = "0x28")]
	private ConstraintStruct cs;

	[Token(Token = "0x400075F")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList KSs;

	[Token(Token = "0x4000760")]
	[FieldOffset(Offset = "0x38")]
	private int KSpointer;

	[Token(Token = "0x1700040A")]
	public int lastDepth
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x4843930", Offset = "0x4843930", VA = "0x4843930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x4843850", Offset = "0x4843850", VA = "0x4843850")]
	public SelectorActiveAxis(Asttree axisTree, ConstraintStruct cs)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x48439C0", Offset = "0x48439C0", VA = "0x48439C0", Slot = "4")]
	public override bool EndElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x48439F0", Offset = "0x48439F0", VA = "0x48439F0")]
	public int PushKS(int errline, int errcol)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4843EE0", Offset = "0x4843EE0", VA = "0x4843EE0")]
	public KeySequence PopKS()
	{
		return null;
	}
}
