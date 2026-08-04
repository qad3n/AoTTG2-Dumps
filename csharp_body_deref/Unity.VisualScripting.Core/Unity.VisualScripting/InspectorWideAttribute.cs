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

[Token(Token = "0x2000049")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = false, Inherited = true)]
public sealed class InspectorWideAttribute : Attribute
{
	[Token(Token = "0x1700006F")]
	public bool toEdge
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4CA3E40", Offset = "0x4CA3E40", VA = "0x4CA3E40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4CA3E50", Offset = "0x4CA3E50", VA = "0x4CA3E50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4CA3E10", Offset = "0x4CA3E10", VA = "0x4CA3E10")]
	public InspectorWideAttribute()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4CA3E20", Offset = "0x4CA3E20", VA = "0x4CA3E20")]
	public InspectorWideAttribute(bool toEdge)
	{
	}
}
