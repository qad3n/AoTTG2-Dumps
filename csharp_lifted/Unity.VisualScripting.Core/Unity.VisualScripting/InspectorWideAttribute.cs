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
		[Address(RVA = "0x6793270", Offset = "0x6792270", VA = "0x6793270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x6793280", Offset = "0x6792280", VA = "0x6793280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x6793240", Offset = "0x6792240", VA = "0x6793240")]
	public InspectorWideAttribute()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6793250", Offset = "0x6792250", VA = "0x6793250")]
	public InspectorWideAttribute(bool toEdge)
	{
	}
}
