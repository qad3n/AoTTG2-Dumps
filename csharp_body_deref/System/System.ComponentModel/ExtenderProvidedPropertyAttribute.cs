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

[Token(Token = "0x200019E")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ExtenderProvidedPropertyAttribute : Attribute
{
	[Token(Token = "0x17000211")]
	public PropertyDescriptor ExtenderProperty
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000212")]
	public IExtenderProvider Provider
	{
		[Token(Token = "0x6000AA1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000213")]
	public Type ReceiverType
	{
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x289E340", Offset = "0x289C940", VA = "0x18289E340")]
	internal static ExtenderProvidedPropertyAttribute Create(PropertyDescriptor extenderProperty, Type receiverType, IExtenderProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ExtenderProvidedPropertyAttribute()
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x289E3D0", Offset = "0x289C9D0", VA = "0x18289E3D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x289E4C0", Offset = "0x289CAC0", VA = "0x18289E4C0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
