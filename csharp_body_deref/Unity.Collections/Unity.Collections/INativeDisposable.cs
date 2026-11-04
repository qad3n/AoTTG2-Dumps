// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.INativeDisposable
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x200003A")]
public interface INativeDisposable : IDisposable
{
	[Token(Token = "0x600013B")]
	JobHandle Dispose(JobHandle inputDeps);
}
