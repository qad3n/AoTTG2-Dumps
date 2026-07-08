using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005DF")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Module, AllowMultiple = false)]
[ComVisible(true)]
public sealed class DebuggableAttribute : Attribute
{
	[Token(Token = "0x20005E0")]
	[Flags]
	[ComVisible(true)]
	public enum DebuggingModes
	{
		[Token(Token = "0x40019FC")]
		None = 0,
		[Token(Token = "0x40019FD")]
		Default = 1,
		[Token(Token = "0x40019FE")]
		DisableOptimizations = 0x100,
		[Token(Token = "0x40019FF")]
		IgnoreSymbolStoreSequencePoints = 2,
		[Token(Token = "0x4001A00")]
		EnableEditAndContinue = 4
	}

	[Token(Token = "0x40019FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggingModes m_debuggingModes;

	[Token(Token = "0x6002E5D")]
	[Address(RVA = "0x4F94A40", Offset = "0x4F94A40", VA = "0x4F94A40")]
	public DebuggableAttribute(DebuggingModes modes)
	{
	}
}
