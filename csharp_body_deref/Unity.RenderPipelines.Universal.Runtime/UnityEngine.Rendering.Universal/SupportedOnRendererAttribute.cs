// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SupportedOnRendererAttribute
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x668FC50", Offset = "0x668EC50", VA = "0x668FC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x668FC60", Offset = "0x668EC60", VA = "0x668FC60")]
	public SupportedOnRendererAttribute(Type renderer)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x668FD00", Offset = "0x668ED00", VA = "0x668FD00")]
	public SupportedOnRendererAttribute(params Type[] renderers)
	{
	}
}
