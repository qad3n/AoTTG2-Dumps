// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeSetAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000050")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public class TypeSetAttribute : Attribute
{
	[Token(Token = "0x17000072")]
	public TypeSet typeSet
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x4CA4050", Offset = "0x4CA4050", VA = "0x4CA4050")]
		[CompilerGenerated]
		get
		{
			return default(TypeSet);
		}
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4CA4030", Offset = "0x4CA4030", VA = "0x4CA4030")]
	public TypeSetAttribute(TypeSet typeSet)
	{
	}
}
