using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CC")]
public interface IMacro : IGraphRoot, IGraphParent, ISerializationDependency, ISerializationCallbackReceiver, IAotStubbable
{
	[Token(Token = "0x17000109")]
	IGraph graph
	{
		[Token(Token = "0x60004E7")]
		get;
		[Token(Token = "0x60004E8")]
		set;
	}
}
