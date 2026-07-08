using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019B")]
internal sealed class PropertyByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalDefinition? _object;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x30")]
	private readonly PropertyInfo _property;

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x41CCB80", Offset = "0x41CCB80", VA = "0x41CCB80")]
	public PropertyByRefUpdater(LocalDefinition? obj, PropertyInfo property, int argumentIndex)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x41CCBD0", Offset = "0x41CCBD0", VA = "0x41CCBD0", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x41CCD20", Offset = "0x41CCD20", VA = "0x41CCD20", Slot = "5")]
	public override void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
