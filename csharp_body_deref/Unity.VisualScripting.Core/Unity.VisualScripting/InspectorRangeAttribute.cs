// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorRangeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000046")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorRangeAttribute : Attribute
{
	[Token(Token = "0x17000069")]
	public float min
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x4CA3C30", Offset = "0x4CA3C30", VA = "0x4CA3C30")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x4CA3C40", Offset = "0x4CA3C40", VA = "0x4CA3C40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public float max
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4CA3C50", Offset = "0x4CA3C50", VA = "0x4CA3C50")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x4CA3C60", Offset = "0x4CA3C60", VA = "0x4CA3C60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4CA3BF0", Offset = "0x4CA3BF0", VA = "0x4CA3BF0")]
	public InspectorRangeAttribute(float min, float max)
	{
	}
}
