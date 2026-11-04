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

[Token(Token = "0x2000047")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorRangeAttribute : Attribute
{
	[Token(Token = "0x1700006A")]
	public float min
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public float max
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x15477E0", Offset = "0x1545DE0", VA = "0x1815477E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x2B5B5E0", Offset = "0x2B59BE0", VA = "0x182B5B5E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x2DB1850", Offset = "0x2DAFE50", VA = "0x182DB1850")]
	public InspectorRangeAttribute(float min, float max)
	{
	}
}
