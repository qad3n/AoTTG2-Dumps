using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000024")]
[EditorBrowsable(EditorBrowsableState.Never)]
[Obsolete("Not supported anymore.", true)]
public interface IMask
{
	[Token(Token = "0x1700004B")]
	RectTransform rectTransform
	{
		[Token(Token = "0x600013E")]
		get;
	}

	[Token(Token = "0x600013D")]
	bool Enabled();
}
