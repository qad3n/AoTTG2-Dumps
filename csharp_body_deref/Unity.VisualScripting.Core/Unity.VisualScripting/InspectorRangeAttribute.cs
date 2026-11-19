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
		[Address(RVA = "0x6793060", Offset = "0x6792060", VA = "0x6793060")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x6793070", Offset = "0x6792070", VA = "0x6793070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public float max
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x6793080", Offset = "0x6792080", VA = "0x6793080")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x6793090", Offset = "0x6792090", VA = "0x6793090")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x6793020", Offset = "0x6792020", VA = "0x6793020")]
	public InspectorRangeAttribute(float min, float max)
	{
	}
}
