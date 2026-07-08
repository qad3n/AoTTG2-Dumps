using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x2000017")]
[UnityEngine.Bindings.NativeType(Header = "Modules/XR/Subsystems/Input/XRInputSubsystemDescriptor.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
public class XRInputSubsystemDescriptor : IntegratedSubsystemDescriptor<XRInputSubsystem>
{
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4DE5340", Offset = "0x4DE5340", VA = "0x4DE5340")]
	public XRInputSubsystemDescriptor()
	{
	}
}
