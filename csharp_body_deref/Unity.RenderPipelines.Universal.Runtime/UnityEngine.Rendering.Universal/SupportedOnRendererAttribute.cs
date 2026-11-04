// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SupportedOnRendererAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001AD")]
[AttributeUsage(AttributeTargets.Class)]
public class SupportedOnRendererAttribute : Attribute
{
	[Token(Token = "0x17000232")]
	public Type[] rendererTypes
	{
		[Token(Token = "0x6000956")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x2C98E30", Offset = "0x2C97430", VA = "0x182C98E30")]
	public SupportedOnRendererAttribute(Type renderer)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x2C99010", Offset = "0x2C97610", VA = "0x182C99010")]
	public SupportedOnRendererAttribute(params Type[] renderers)
	{
	}
}
