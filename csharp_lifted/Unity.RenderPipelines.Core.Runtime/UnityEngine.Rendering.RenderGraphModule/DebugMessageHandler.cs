// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Networking.PlayerConnection;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200023A")]
internal class DebugMessageHandler : ScriptableObject
{
	[Token(Token = "0x200023B")]
	public enum MessageType : byte
	{
		[Token(Token = "0x4000A05")]
		Activate,
		[Token(Token = "0x4000A06")]
		DebugData,
		[Token(Token = "0x4000A07")]
		AnalyticsData
	}

	[Token(Token = "0x200023C")]
	public abstract class IPayload
	{
		[Token(Token = "0x4000A08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x17000213")]
		public bool isCompatible
		{
			[Token(Token = "0x6000FEE")]
			[Address(RVA = "0x655E100", Offset = "0x655D100", VA = "0x655E100")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000FEF")]
		[Address(RVA = "0x655E290", Offset = "0x655D290", VA = "0x655E290")]
		protected IPayload()
		{
		}
	}

	[Token(Token = "0x200023D")]
	public class DebugDataPayload : IPayload
	{
		[Token(Token = "0x4000A09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string graphName;

		[Token(Token = "0x4000A0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public EntityId executionId;

		[Token(Token = "0x4000A0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public RenderGraph.DebugData debugData;

		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x655E0F0", Offset = "0x655D0F0", VA = "0x655E0F0")]
		public DebugDataPayload()
		{
		}
	}

	[Token(Token = "0x200023E")]
	public class AnalyticsPayload : IPayload
	{
		[Token(Token = "0x4000A0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public GraphicsDeviceType graphicsDeviceType;

		[Token(Token = "0x4000A0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DeviceType deviceType;

		[Token(Token = "0x4000A0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string deviceModel;

		[Token(Token = "0x4000A0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string gpuVendor;

		[Token(Token = "0x4000A10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string gpuName;

		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x655E160", Offset = "0x655D160", VA = "0x655E160")]
		public AnalyticsPayload()
		{
		}
	}

	[Token(Token = "0x4000A00")]
	internal const int k_Version = 1;

	[Token(Token = "0x4000A01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Guid s_EditorToPlayerGuid;

	[Token(Token = "0x4000A02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Guid s_PlayerToEditorGuid;

	[Token(Token = "0x4000A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Action<MessageType, IPayload> m_UserCallback;

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x655D100", Offset = "0x655C100", VA = "0x655D100")]
	private void InternalCallback(MessageEventArgs msg)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x655D8B0", Offset = "0x655C8B0", VA = "0x655D8B0")]
	public void Register(Action<MessageType, IPayload> callback)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x655D990", Offset = "0x655C990", VA = "0x655D990")]
	public void UnregisterAll()
	{
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x655DA60", Offset = "0x655CA60", VA = "0x655DA60")]
	public void Send(MessageType messageType, [Optional] IPayload payload)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x655DB00", Offset = "0x655CB00", VA = "0x655DB00")]
	internal static byte[] SerializeMessage(MessageType type, [Optional] IPayload payload)
	{
		return null;
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x655D180", Offset = "0x655C180", VA = "0x655D180")]
	internal static (MessageType, IPayload) DeserializeMessage(byte[] data)
	{
		return default((MessageType, IPayload));
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x655E1D0", Offset = "0x655D1D0", VA = "0x655E1D0")]
	public DebugMessageHandler()
	{
	}
}
