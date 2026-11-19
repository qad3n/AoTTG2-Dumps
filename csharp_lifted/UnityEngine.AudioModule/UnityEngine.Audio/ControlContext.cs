// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ControlContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Audio;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x200001E")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct ControlContext
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	private unsafe ControlHeader* m_Header;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x8")]
	internal Handle m_Handle;

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x68B1AB0", Offset = "0x68B0AB0", VA = "0x68B1AB0")]
	internal unsafe ControlContext(void* headerThatShouldBeOfResourceType)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x68B1B70", Offset = "0x68B0B70", VA = "0x68B1B70")]
	public bool Exists(ProcessorInstance processorInstance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x68B1C10", Offset = "0x68B0C10", VA = "0x68B1C10")]
	public GeneratorInstance.Configuration GetConfiguration(GeneratorInstance generatorInstance)
	{
		return default(GeneratorInstance.Configuration);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x68B1C50", Offset = "0x68B0C50", VA = "0x68B1C50")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	internal static void CleanupHeader(ref ControlHeader header)
	{
	}
}
