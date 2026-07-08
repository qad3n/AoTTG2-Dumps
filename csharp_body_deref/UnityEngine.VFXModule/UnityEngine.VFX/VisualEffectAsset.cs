using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x200000B")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("VFXScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/VisualEffectAsset.h")]
public class VisualEffectAsset : VisualEffectObject
{
	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int PlayEventID;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int StopEventID;

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4DE23A0", Offset = "0x4DE23A0", VA = "0x4DE23A0")]
	public VisualEffectAsset()
	{
	}
}
