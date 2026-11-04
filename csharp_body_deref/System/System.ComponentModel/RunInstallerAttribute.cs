// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RunInstallerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001DC")]
[AttributeUsage(AttributeTargets.Class)]
public class RunInstallerAttribute : Attribute
{
	[Token(Token = "0x4000746")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RunInstallerAttribute Yes;

	[Token(Token = "0x4000747")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RunInstallerAttribute No;

	[Token(Token = "0x4000748")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RunInstallerAttribute Default;

	[Token(Token = "0x17000293")]
	public bool RunInstaller
	{
		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public RunInstallerAttribute(bool runInstaller)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x28C8DC0", Offset = "0x28C73C0", VA = "0x1828C8DC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x28C8E50", Offset = "0x28C7450", VA = "0x1828C8E50", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
