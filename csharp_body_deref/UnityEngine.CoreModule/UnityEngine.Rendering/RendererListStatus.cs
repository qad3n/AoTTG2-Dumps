using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F5")]
[MovedFrom("UnityEngine.Rendering.RendererUtils")]
public enum RendererListStatus
{
	[Token(Token = "0x40008FF")]
	kRendererListInvalid = -2,
	[Token(Token = "0x4000900")]
	kRendererListProcessing,
	[Token(Token = "0x4000901")]
	kRendererListEmpty,
	[Token(Token = "0x4000902")]
	kRendererListPopulated
}
