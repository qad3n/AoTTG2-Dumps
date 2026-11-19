// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExtenderProvidedPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015F")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ExtenderProvidedPropertyAttribute : Attribute
{
	[Token(Token = "0x170001E2")]
	public PropertyDescriptor ExtenderProperty
	{
		[Token(Token = "0x60008DF")]
		[Address(RVA = "0x6234060", Offset = "0x6233060", VA = "0x6234060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E0")]
		[Address(RVA = "0x6234070", Offset = "0x6233070", VA = "0x6234070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	public IExtenderProvider Provider
	{
		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x6234080", Offset = "0x6233080", VA = "0x6234080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x6234090", Offset = "0x6233090", VA = "0x6234090")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E4")]
	public Type ReceiverType
	{
		[Token(Token = "0x60008E3")]
		[Address(RVA = "0x62340A0", Offset = "0x62330A0", VA = "0x62340A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E4")]
		[Address(RVA = "0x62340B0", Offset = "0x62330B0", VA = "0x62340B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x6233A70", Offset = "0x6232A70", VA = "0x6233A70")]
	internal static ExtenderProvidedPropertyAttribute Create(PropertyDescriptor extenderProperty, Type receiverType, IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x6234050", Offset = "0x6233050", VA = "0x6234050")]
	public ExtenderProvidedPropertyAttribute()
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x62340C0", Offset = "0x62330C0", VA = "0x62340C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x6234190", Offset = "0x6233190", VA = "0x6234190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x62341A0", Offset = "0x62331A0", VA = "0x62341A0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
