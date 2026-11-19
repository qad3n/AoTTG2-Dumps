// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultEventAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200014F")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultEventAttribute : Attribute
{
	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultEventAttribute Default;

	[Token(Token = "0x170001C2")]
	public string Name
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x622FB80", Offset = "0x622EB80", VA = "0x622FB80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x622FB50", Offset = "0x622EB50", VA = "0x622FB50")]
	public DefaultEventAttribute(string name)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x622FB90", Offset = "0x622EB90", VA = "0x622FB90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x622FBF0", Offset = "0x622EBF0", VA = "0x622FBF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
