using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013C")]
internal sealed class StoreStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A5")]
	public override string InstructionName
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x41A98B0", Offset = "0x41A98B0", VA = "0x41A98B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x41A98E0", Offset = "0x41A98E0", VA = "0x41A98E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x41A9880", Offset = "0x41A9880", VA = "0x41A9880")]
	public StoreStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x41A98F0", Offset = "0x41A98F0", VA = "0x41A98F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
