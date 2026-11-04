// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.IAudioGenerator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x2000024")]
[UnityEngine.Scripting.UsedByNativeCode]
public interface IAudioGenerator : GeneratorInstance.ICapabilities
{
	[Token(Token = "0x6000091")]
	GeneratorInstance CreateInstance(ControlContext context, AudioFormat? nestedFormat, ProcessorInstance.CreationParameters creationParameters);
}
