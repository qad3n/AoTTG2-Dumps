// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorWideAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004A")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = false, Inherited = true)]
public sealed class InspectorWideAttribute : Attribute
{
	[Token(Token = "0x17000070")]
	public bool toEdge
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public InspectorWideAttribute()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public InspectorWideAttribute(bool toEdge)
	{
	}
}
