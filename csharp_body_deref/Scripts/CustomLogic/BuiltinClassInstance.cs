// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.BuiltinClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/BuiltinClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005CF")]
internal abstract class BuiltinClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x40018FB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CLMethodBinding<BuiltinClassInstance> Init;

	[Token(Token = "0x17000A10")]
	public override bool LookupBaseClassForVariables
	{
		[Token(Token = "0x6003873")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A11")]
	public override string ClassName
	{
		[Token(Token = "0x6003874")]
		[Address(RVA = "0x209B120", Offset = "0x2099720", VA = "0x18209B120", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A12")]
	public virtual bool IsAbstract
	{
		[Token(Token = "0x6003875")]
		[Address(RVA = "0x209B1A0", Offset = "0x20997A0", VA = "0x18209B1A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A13")]
	public virtual bool IsStatic
	{
		[Token(Token = "0x6003876")]
		[Address(RVA = "0x209B1E0", Offset = "0x20997E0", VA = "0x18209B1E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A14")]
	public virtual bool InheritBaseMembers
	{
		[Token(Token = "0x6003877")]
		[Address(RVA = "0x209B160", Offset = "0x2099760", VA = "0x18209B160", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003872")]
	[Address(RVA = "0x209AF90", Offset = "0x2099590", VA = "0x18209AF90")]
	protected BuiltinClassInstance()
	{
	}
}
