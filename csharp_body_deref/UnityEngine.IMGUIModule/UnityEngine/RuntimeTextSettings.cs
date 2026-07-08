using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x2000026")]
internal class RuntimeTextSettings : TextSettings
{
	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x0")]
	private static RuntimeTextSettings s_DefaultTextSettings;

	[Token(Token = "0x1700008C")]
	internal static RuntimeTextSettings defaultTextSettings
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x4B39D00", Offset = "0x4B39D00", VA = "0x4B39D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4B39DC0", Offset = "0x4B39DC0", VA = "0x4B39DC0")]
	public RuntimeTextSettings()
	{
	}
}
