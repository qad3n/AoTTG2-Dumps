using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x20004A0")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module | AttributeTargets.Class | AttributeTargets.Method)]
[ComVisible(true)]
public class CompilationRelaxationsAttribute : Attribute
{
	[Token(Token = "0x4001336")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_relaxations;

	[Token(Token = "0x17000481")]
	public int CompilationRelaxations
	{
		[Token(Token = "0x60022FB")]
		[Address(RVA = "0x4EDE530", Offset = "0x4EDE530", VA = "0x4EDE530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60022F9")]
	[Address(RVA = "0x4EDE4F0", Offset = "0x4EDE4F0", VA = "0x4EDE4F0")]
	public CompilationRelaxationsAttribute(int relaxations)
	{
	}

	[Token(Token = "0x60022FA")]
	[Address(RVA = "0x4EDE510", Offset = "0x4EDE510", VA = "0x4EDE510")]
	public CompilationRelaxationsAttribute(CompilationRelaxations relaxations)
	{
	}
}
