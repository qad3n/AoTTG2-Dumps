// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.DataPlayableOutput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Director/ScriptBindings/DataPlayableOutput.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Director/ScriptBindings/DataPlayableOutputExtensions.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Director/DataPlayableOutput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
[UnityEngine.Bindings.StaticAccessor("DataPlayableOutputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
internal struct DataPlayableOutput
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private PlayableOutputHandle m_Handle;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4E3C760", Offset = "0x4E3C760", VA = "0x4E3C760")]
	internal DataPlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4E3C850", Offset = "0x4E3C850", VA = "0x4E3C850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallOnPlayerChanged(PlayableOutputHandle handle, object previousPlayer, object currentPlayer)
	{
	}
}
