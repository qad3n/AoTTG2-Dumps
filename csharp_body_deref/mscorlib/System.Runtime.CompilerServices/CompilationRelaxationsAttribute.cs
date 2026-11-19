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
[Token(Token = "0x20004A9")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module | AttributeTargets.Class | AttributeTargets.Method)]
public class CompilationRelaxationsAttribute : Attribute
{
	[Token(Token = "0x400129A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_relaxations;

	[Token(Token = "0x17000483")]
	public int CompilationRelaxations
	{
		[Token(Token = "0x6002349")]
		[Address(RVA = "0x53CBA50", Offset = "0x53CAA50", VA = "0x53CBA50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x53CBA10", Offset = "0x53CAA10", VA = "0x53CBA10")]
	public CompilationRelaxationsAttribute(int relaxations)
	{
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x53CBA30", Offset = "0x53CAA30", VA = "0x53CBA30")]
	public CompilationRelaxationsAttribute(CompilationRelaxations relaxations)
	{
	}
}
