using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000183")]
public interface ISerializationDependency : ISerializationCallbackReceiver
{
	[Token(Token = "0x170001AB")]
	internal bool IsDeserialized
	{
		[Token(Token = "0x6000F6D")]
		get;
		[Token(Token = "0x6000F6C")]
		set;
	}
}
