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
		[Address(RVA = "0x3BC4050", Offset = "0x3BC4050", VA = "0x3BC4050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60022F9")]
	[Address(RVA = "0x3BC4010", Offset = "0x3BC4010", VA = "0x3BC4010")]
	public CompilationRelaxationsAttribute(int relaxations)
	{
	}

	[Token(Token = "0x60022FA")]
	[Address(RVA = "0x3BC4030", Offset = "0x3BC4030", VA = "0x3BC4030")]
	public CompilationRelaxationsAttribute(CompilationRelaxations relaxations)
	{
	}
}
