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
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x2465580", Offset = "0x2463B80", VA = "0x182465580", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A2")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public LoadFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x24654B0", Offset = "0x2463AB0", VA = "0x1824654B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
