// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LoadStaticFieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200013A")]
internal sealed class LoadStaticFieldInstruction : FieldInstruction
{
	[Token(Token = "0x170001A0")]
	public override string InstructionName
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x5DE4230", Offset = "0x5DE3230", VA = "0x5DE4230", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x5DE4260", Offset = "0x5DE3260", VA = "0x5DE4260", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x5DE4200", Offset = "0x5DE3200", VA = "0x5DE4200")]
	public LoadStaticFieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x5DE4270", Offset = "0x5DE3270", VA = "0x5DE4270", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
