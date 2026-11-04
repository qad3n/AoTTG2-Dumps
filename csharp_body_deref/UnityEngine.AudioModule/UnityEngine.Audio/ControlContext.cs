// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ControlContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Audio;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct ControlContext
{
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private unsafe ControlHeader* m_Header;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x8")]
	internal Handle m_Handle;

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2EB5900", Offset = "0x2EB3F00", VA = "0x182EB5900")]
	internal unsafe ControlContext(void* headerThatShouldBeOfResourceType)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2EB5830", Offset = "0x2EB3E30", VA = "0x182EB5830")]
	public bool Exists(ProcessorInstance processorInstance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2EB58A0", Offset = "0x2EB3EA0", VA = "0x182EB58A0")]
	public GeneratorInstance.Configuration GetConfiguration(GeneratorInstance generatorInstance)
	{
		return default(GeneratorInstance.Configuration);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2EB57F0", Offset = "0x2EB3DF0", VA = "0x182EB57F0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	internal static void CleanupHeader(ref ControlHeader header)
	{
	}
}
