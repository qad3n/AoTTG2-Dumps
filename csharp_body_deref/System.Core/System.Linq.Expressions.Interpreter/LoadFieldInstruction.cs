// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013A")]
internal sealed class LoadFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A0")]
	public override string InstructionName
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x44CE770", Offset = "0x44CE770", VA = "0x44CE770", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x44CE7A0", Offset = "0x44CE7A0", VA = "0x44CE7A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A2")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x44CE7B0", Offset = "0x44CE7B0", VA = "0x44CE7B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x44CE740", Offset = "0x44CE740", VA = "0x44CE740")]
	public LoadFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x44CE7C0", Offset = "0x44CE7C0", VA = "0x44CE7C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
