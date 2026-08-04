// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DE")]
internal class NewInstruction : Instruction
{
	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ConstructorInfo _constructor;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x18")]
	protected readonly int _argumentCount;

	[Token(Token = "0x1700020D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x44FBE50", Offset = "0x44FBE50", VA = "0x44FBE50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x44FBE60", Offset = "0x44FBE60", VA = "0x44FBE60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x44FBE70", Offset = "0x44FBE70", VA = "0x44FBE70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x44FBE20", Offset = "0x44FBE20", VA = "0x44FBE20")]
	public NewInstruction(ConstructorInfo constructor, int argumentCount)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x44FBEA0", Offset = "0x44FBEA0", VA = "0x44FBEA0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x44FC000", Offset = "0x44FC000", VA = "0x44FC000")]
	protected object[] GetArgs(InterpretedFrame frame, int first)
	{
		return null;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x44FC1F0", Offset = "0x44FC1F0", VA = "0x44FC1F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
