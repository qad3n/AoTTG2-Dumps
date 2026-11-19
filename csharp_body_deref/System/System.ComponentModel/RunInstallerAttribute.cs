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

[Token(Token = "0x200019D")]
[AttributeUsage(AttributeTargets.Class)]
public class RunInstallerAttribute : Attribute
{
	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RunInstallerAttribute Yes;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RunInstallerAttribute No;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RunInstallerAttribute Default;

	[Token(Token = "0x17000264")]
	public bool RunInstaller
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x6249360", Offset = "0x6248360", VA = "0x6249360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x6249340", Offset = "0x6248340", VA = "0x6249340")]
	public RunInstallerAttribute(bool runInstaller)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x6249370", Offset = "0x6248370", VA = "0x6249370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x6249400", Offset = "0x6248400", VA = "0x6249400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x6249410", Offset = "0x6248410", VA = "0x6249410", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
