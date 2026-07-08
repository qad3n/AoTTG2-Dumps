using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000194")]
public interface IUnityObjectOwnable
{
	[Token(Token = "0x170001BB")]
	Object owner
	{
		[Token(Token = "0x6000FB6")]
		get;
		[Token(Token = "0x6000FB7")]
		set;
	}
}
