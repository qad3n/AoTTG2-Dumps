// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ActiveAxis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200015F")]
internal class ActiveAxis
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x10")]
	private int _currentDepth;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x14")]
	private bool _isActive;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x18")]
	private Asttree _axisTree;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _axisStack;

	[Token(Token = "0x170003E9")]
	public int CurrentDepth
	{
		[Token(Token = "0x6000F31")]
		[Address(RVA = "0x613D530", Offset = "0x613C530", VA = "0x613D530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x613D540", Offset = "0x613C540", VA = "0x613D540")]
	internal void Reactivate()
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x613D550", Offset = "0x613C550", VA = "0x613D550")]
	internal ActiveAxis(Asttree axisTree)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x613D710", Offset = "0x613C710", VA = "0x613D710")]
	public bool MoveToStartElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x613D880", Offset = "0x613C880", VA = "0x613D880", Slot = "4")]
	public virtual bool EndElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x613D980", Offset = "0x613C980", VA = "0x613D980")]
	public bool MoveToAttribute(string localname, string URN)
	{
		return default(bool);
	}
}
