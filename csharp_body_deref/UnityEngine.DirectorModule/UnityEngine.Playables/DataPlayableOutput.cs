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
	[Address(RVA = "0x4B14E30", Offset = "0x4B14E30", VA = "0x4B14E30")]
	internal DataPlayableOutput(PlayableOutputHandle handle)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B14F20", Offset = "0x4B14F20", VA = "0x4B14F20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void Internal_CallOnPlayerChanged(PlayableOutputHandle handle, object previousPlayer, object currentPlayer)
	{
	}
}
