// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsLayers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x2000018")]
public readonly struct PhysicsLayers
{
	[Serializable]
	[Token(Token = "0x2000019")]
	public class LayerNames : ISerializationCallbackReceiver
	{
		[Token(Token = "0x40000C2")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		internal string[] m_Names;

		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x18")]
		private Dictionary<string, int> m_NameMap;

		[Token(Token = "0x17000022")]
		private string[] Names
		{
			[Token(Token = "0x60000D4")]
			[Address(RVA = "0x69CC3A0", Offset = "0x69CB3A0", VA = "0x69CC3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000023")]
		private Dictionary<string, int> NameMap
		{
			[Token(Token = "0x60000D5")]
			[Address(RVA = "0x69CC400", Offset = "0x69CB400", VA = "0x69CC400")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000024")]
		internal static LayerNames DefaultLayerNames
		{
			[Token(Token = "0x60000D8")]
			[Address(RVA = "0x69C9350", Offset = "0x69C8350", VA = "0x69C9350")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x69CC490", Offset = "0x69CB490", VA = "0x69CC490", Slot = "4")]
		public void OnBeforeSerialize()
		{
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x69CC4A0", Offset = "0x69CB4A0", VA = "0x69CC4A0", Slot = "5")]
		public void OnAfterDeserialize()
		{
		}

		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x69CC640", Offset = "0x69CB640", VA = "0x69CC640")]
		public LayerNames()
		{
		}
	}
}
