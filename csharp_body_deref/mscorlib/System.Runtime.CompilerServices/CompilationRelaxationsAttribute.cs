// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CompilationRelaxationsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x20004D0")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module | AttributeTargets.Class | AttributeTargets.Method)]
public class CompilationRelaxationsAttribute : Attribute
{
	[Token(Token = "0x400133A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_relaxations;

	[Token(Token = "0x17000484")]
	public int CompilationRelaxations
	{
		[Token(Token = "0x600237C")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600237A")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public CompilationRelaxationsAttribute(int relaxations)
	{
	}

	[Token(Token = "0x600237B")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public CompilationRelaxationsAttribute(CompilationRelaxations relaxations)
	{
	}
}
