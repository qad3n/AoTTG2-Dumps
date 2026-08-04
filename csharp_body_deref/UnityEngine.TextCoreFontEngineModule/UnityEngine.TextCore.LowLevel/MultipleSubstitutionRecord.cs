// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MultipleSubstitutionRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000017")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MultipleSubstitutionRecord
{
	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("targetGlyphID")]
	[SerializeField]
	private uint m_TargetGlyphID;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("substituteGlyphIDs")]
	[SerializeField]
	private uint[] m_SubstituteGlyphIDs;
}
